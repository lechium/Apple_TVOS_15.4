//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface RadioRecentStationsResponse : NSObject
{
    NSDictionary *_responseDictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001eff4
@property(readonly, copy, nonatomic) NSArray *stationGroups;
@property(readonly, copy, nonatomic) NSArray *stationDictionaries;
- (id)initWithResponseDictionary:(id)arg1;	// IMP=0x000000000001ec88

@end
