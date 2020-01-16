//
//  GolfController.h
//  Uiportfolio
//
//  Created by Ak Prathipati on 1/15/20.
//  Copyright © 2020 JM. All rights reserved.
//
#import <UIKit/UIKit.h>
// These values simulate speed and friction
#define speedScale 0.20
#define speedDamping 0.90 // friction rate
#define stopSpeed 5.0
@interface GolfController : UIViewController
@property (strong, nonatomic) IBOutlet UIImageView *hole;
@property (strong, nonatomic) IBOutlet UIImageView *ball;
@property (nonatomic) CGPoint firstPoint;
@property (nonatomic) CGPoint lastPoint;
@property (nonatomic) float ballVelocityX;
@property (nonatomic) float ballVelocityY;
@property (strong, nonatomic) NSTimer *gameTimer;
@end
