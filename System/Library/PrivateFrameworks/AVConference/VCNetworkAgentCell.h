//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCNetworkAgentCell
{
    _Bool _cellularAssertionActive;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000000002f3dee
@property(readonly) _Bool cellularAssertionActive; // @synthesize cellularAssertionActive=_cellularAssertionActive;
- (void)removeCellularAssertion;	// IMP=0x00000000002f3d9c
- (void)addCellularAssertion;	// IMP=0x00000000002f3d4a

@end

