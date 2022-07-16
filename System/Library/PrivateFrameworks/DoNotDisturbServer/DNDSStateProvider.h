//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DNDSModeConfigurationManager, DNDSStateProviderSystemSnapshot, DNDState;

@interface DNDSStateProvider : NSObject
{
    DNDSModeConfigurationManager *_modeConfigurationManager;	// 8 = 0x8
    DNDSStateProviderSystemSnapshot *_lastSystemSnapshot;	// 16 = 0x10
    DNDState *_lastCalculatedState;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000037e27
@property(copy) DNDState *lastCalculatedState; // @synthesize lastCalculatedState=_lastCalculatedState;
@property(copy) DNDSStateProviderSystemSnapshot *lastSystemSnapshot; // @synthesize lastSystemSnapshot=_lastSystemSnapshot;
- (id)recalculateStateForSnapshot:(id)arg1;	// IMP=0x000000000003715f
- (id)initWithModeConfigurationManager:(id)arg1;	// IMP=0x00000000000370f4

@end

