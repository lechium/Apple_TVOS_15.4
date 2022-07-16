//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface RadioRecentStationsResponseStationGroup : NSObject
{
    NSDictionary *_responseDictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002879e
@property(readonly, copy, nonatomic) NSArray *stationDictionaries;
@property(readonly, copy, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (id)initWithResponseDictionary:(id)arg1;	// IMP=0x00000000000285f4

@end
