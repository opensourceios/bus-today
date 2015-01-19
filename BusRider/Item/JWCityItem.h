//
//  JWCityItem.h
//  BusRider
//
//  Created by John Wong on 1/19/15.
//  Copyright (c) 2015 John Wong. All rights reserved.
//

#import "JWItem.h"

@interface JWCityItem : JWItem <NSCoding>

@property (nonatomic, strong) NSString *cityId;
@property (nonatomic, strong) NSString *cityName;

+ (NSArray *)arrayFromDictionary:(NSDictionary *)dict;

@end
