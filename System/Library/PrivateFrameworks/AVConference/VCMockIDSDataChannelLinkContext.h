//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDS/IDSDataChannelLinkContext.h>

__attribute__((visibility("hidden")))
@interface VCMockIDSDataChannelLinkContext : IDSDataChannelLinkContext
{
    _Bool _forceNetworkCellular;	// 16 = 0x10
    _Bool _isTestingOneToOne;	// 17 = 0x11
}

- (_Bool)isVirtualRelayLink;	// IMP=0x00000000002b56f1
- (long long)connectionType;	// IMP=0x00000000002b56e6
- (unsigned int)remoteRATType;	// IMP=0x00000000002b56d2
- (unsigned int)RATType;	// IMP=0x00000000002b56be
- (id)init;	// IMP=0x00000000002b5569

@end
