#include "UI_TheftAndSabotage.h"

bool UI_TheftAndSabotage::initWithPlayer(const std::shared_ptr<Player> & player, ECardName cardName) {
	//根据卡牌名字获取标题。
//根据Player获取其所有卡牌资料，再产生8个UI_Card *，某些为空指针。
//为每个UI_Card *设置触摸事件，注意只允许一个UI_card *处于选中状态。
	// TODO - implement UI_TheftAndSabotage::initWithPlayer
	throw "Not yet implemented";
}

const std::shared_ptr<Card> & UI_TheftAndSabotage::getSelectedCard() const {
	return m_selectedCard;
}

void UI_TheftAndSabotage::setSelectedCard(const std::shared_ptr<Card> & selectedCard) {
	m_selectedCard = selectedCard;
}
