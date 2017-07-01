//
//  Player.h
//  2w1d6_snakesAndLadders
//
//  Created by Seantastic31 on 01/07/2017.
//  Copyright © 2017 Seantastic31. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Player : NSObject

@property (nonatomic) NSInteger currentSquare;
@property (strong, nonatomic) NSDictionary *gameLogic;
@property (nonatomic) BOOL gameOver;

- (void)rollDice;

@end
