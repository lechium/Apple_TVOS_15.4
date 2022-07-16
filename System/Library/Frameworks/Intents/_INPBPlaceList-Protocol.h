//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBCondition, _INPBPlace;

@protocol _INPBPlaceList <NSObject>
+ (Class)placeType;
@property(readonly, nonatomic) unsigned long long placesCount;
@property(copy, nonatomic) NSArray *places;
@property(readonly, nonatomic) _Bool hasCondition;
@property(retain, nonatomic) _INPBCondition *condition;
- (_INPBPlace *)placeAtIndex:(unsigned long long)arg1;
- (void)addPlace:(_INPBPlace *)arg1;
- (void)clearPlaces;
@end

