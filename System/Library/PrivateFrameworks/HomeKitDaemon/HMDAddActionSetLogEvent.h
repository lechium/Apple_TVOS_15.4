//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSString;

@interface HMDAddActionSetLogEvent : HMMLogEvent
{
    NSString *_actionSetType;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003a0ff5
@property(readonly, copy) NSString *actionSetType; // @synthesize actionSetType=_actionSetType;
- (id)initWithActionSetType:(id)arg1;	// IMP=0x00000000003a0f71

@end

