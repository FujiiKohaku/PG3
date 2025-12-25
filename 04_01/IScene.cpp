#include "IScene.h"
// シーン状態の初期化
SceneState IScene::sceneState = SceneState::Title;

int IScene::GetSceneState() { return sceneState; }
