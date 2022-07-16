//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RWIProtocolConfiguration;

@interface RWIProtocolInspector : NSObject
{
    struct AugmentableInspectorController *_inspectorController;	// 8 = 0x8
    struct RetainPtr<RWIProtocolConfiguration> _configuration;	// 16 = 0x10
    struct unique_ptr<RWIAugmentableInspectorControllerClient, std::default_delete<RWIAugmentableInspectorControllerClient>> _inspectorControllerClient;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x000000000003792d
- (void).cxx_destruct;	// IMP=0x00000000000378ef
- (void)inspectorControllerDestroyed;	// IMP=0x00000000000378cd
@property(readonly, nonatomic) _Bool connected;
@property(readonly, nonatomic) RWIProtocolConfiguration *configuration;
- (void)dealloc;	// IMP=0x0000000000037861
- (id)initWithController:(struct AugmentableInspectorController *)arg1;	// IMP=0x00000000000377ae

@end

