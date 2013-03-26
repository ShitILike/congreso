//
//  State.h
//  congreso
//
//  Created by Christian Roman on 23/03/13.
//  Copyright (c) 2013 Christian Roman. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface State : NSObject

@property (nonatomic, assign) int ID;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, assign) int division;

@end
