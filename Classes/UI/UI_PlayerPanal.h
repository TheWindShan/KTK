#ifndef UI_PlayerPanal_h__
#define UI_PlayerPanal_h__

#include "cocos2d.h"
#include "Player\Player.h"
#include "UI_ID.h"
#include "UI_HP.h"
#include "UI_Position.h"
#include "UI_HandCardQuantity.h"
#include "UI_EquipmentPanal.h"
#include "UI_JudgeIcon.h"
#include "UI_InformationBox.h"
#include "UI_LogBox.h"

class UI_PlayerPanal : public cocos2d::Node {
public:
	static UI_PlayerPanal * create(const std::shared_ptr<Player> & player) {
		UI_PlayerPanal * pRet = new(std::nothrow) UI_PlayerPanal();
		if (pRet && pRet->initWithPlayer(player)) {
			pRet->autorelease();
			return pRet;
		}
		else {
			delete pRet;
			pRet = NULL;
			return NULL;
		}
	}
	bool initWithPlayer(const std::shared_ptr<Player> & player);
	std::shared_ptr<Player> getPlayer() const;
	UI_ID * getID() const;
	UI_HP * getHP() const;
	UI_Position * getPositionUI() const;
	UI_HandCardQuantity * getHandCardQuantity() const;
	UI_EquipmentPanal * getEquipmentPanal() const;
	UI_JudgeIcon * getJudgeIcon() const;
//	Todo:stm delete or not?
// 	UI_InformationBox * getInformationBox() const;
// 	UI_LogBox * getLogBox() const;
	virtual void drawCards(const std::vector<std::shared_ptr<Card>> & cards) const;
	EPlayerColor getPlayerColor() const;
	void setPlayerColor(EPlayerColor playerColor);
	EPlayerPanalState getPlayerPanalState() const;
	void setPlayerPanalState(EPlayerPanalState playerPanalState);
	void update(float delta) override;
//	Todo:stm delete or not?
// 	void clean() const;
protected:
	UI_PlayerPanal() = default;

	std::weak_ptr<Player> m_player;
	cocos2d::LayerColor * m_background;
	cocos2d::Sprite * m_portrait;
	cocos2d::Label * m_name;
	cocos2d::LayerColor * m_force;
	UI_ID * m_ID;
	UI_HP * m_HP;
	UI_Position * m_position;
	UI_HandCardQuantity * m_handCardQuantity;
	UI_EquipmentPanal * m_equipmentPanal;
	UI_JudgeIcon * m_judgeIcon;

private:
//	Todo:stm delete or not?
// 	UI_InformationBox * m_informationBox;
// 	UI_LogBox * m_logBox;
	EPlayerColor m_playerColor;
	EPlayerPanalState m_playerPanalState;
};
#endif // UI_PlayerPanal_h__
