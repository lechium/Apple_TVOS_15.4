//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class NSString, NSXPCListenerEndpoint;

@interface WFShowActionInterfaceDialogResponse <NSSecureCoding>
{
    _Bool _unsupported;	// 8 = 0x8
    NSXPCListenerEndpoint *_listenerEndpoint;	// 16 = 0x10
    NSString *_userInterfaceType;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000f8dbf
- (void).cxx_destruct;	// IMP=0x00000000000f8d8e
@property(readonly, nonatomic, getter=isUnsupported) _Bool unsupported; // @synthesize unsupported=_unsupported;
@property(readonly, nonatomic) NSString *userInterfaceType; // @synthesize userInterfaceType=_userInterfaceType;
@property(readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // @synthesize listenerEndpoint=_listenerEndpoint;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f8c64
- (id)description;	// IMP=0x00000000000f8b56
- (_Bool)shouldDismissDialogInTransientMode;	// IMP=0x00000000000f8b4e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f8a2e
- (id)initWithListenerEndpoint:(id)arg1 userInterfaceType:(id)arg2;	// IMP=0x00000000000f8968
- (id)initWithUnsupported:(_Bool)arg1;	// IMP=0x00000000000f8906
- (id)initWithCancelled:(_Bool)arg1;	// IMP=0x00000000000f88d7

@end

