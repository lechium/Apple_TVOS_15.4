//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_nw_browse_result;

@interface HAP2AccessoryServerDiscoveryBonjourBrowseResultTuple : NSObject
{
    NSObject<OS_nw_browse_result> *_previousResult;	// 8 = 0x8
    NSObject<OS_nw_browse_result> *_currentResult;	// 16 = 0x10
    unsigned long long _changes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000011e7b9
@property(readonly, nonatomic) unsigned long long changes; // @synthesize changes=_changes;
@property(readonly, nonatomic) NSObject<OS_nw_browse_result> *currentResult; // @synthesize currentResult=_currentResult;
@property(readonly, nonatomic) NSObject<OS_nw_browse_result> *previousResult; // @synthesize previousResult=_previousResult;
- (id)initWithPreviousResult:(id)arg1 currentResult:(id)arg2 changes:(unsigned long long)arg3;	// IMP=0x000000000011e6f6

@end

