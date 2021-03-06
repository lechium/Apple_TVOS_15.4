//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/AXMDescribing-Protocol.h>
#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@class NSString;
@protocol AXMVisionEngineNodeConnectionDelegate, OS_dispatch_queue;

@interface AXMVisionEngineNode : NSObject <NSSecureCoding, AXMDescribing>
{
    _Bool _connected;	// 8 = 0x8
    _Bool _enabled;	// 9 = 0x9
    id <AXMVisionEngineNodeConnectionDelegate> _delegate;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_nodeQueue;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000088426
+ (id)title;	// IMP=0x00000000000882f9
+ (_Bool)isSupported;	// IMP=0x00000000000882ae
- (void).cxx_destruct;	// IMP=0x00000000000888f6
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *nodeQueue; // @synthesize nodeQueue=_nodeQueue;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <AXMVisionEngineNodeConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isConnected) _Bool connected; // @synthesize connected=_connected;
- (void)axmAppendRecursiveDescription:(id)arg1 withIndentation:(long long)arg2;	// IMP=0x00000000000887d1
- (id)axmDescription;	// IMP=0x0000000000088659
@property(readonly, nonatomic) _Bool areDiagnosticsEnabled;
- (void)disconnect;	// IMP=0x00000000000885d4
- (void)connect:(id)arg1;	// IMP=0x000000000008856b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000884ce
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008842e
- (_Bool)validateVisionKitSoftLinkSymbols;	// IMP=0x000000000008841e
- (void)freeResources;	// IMP=0x0000000000088418
- (void)nodeInitialize;	// IMP=0x0000000000088412
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000088341
@property(readonly, nonatomic) _Bool requiresVisionFramework;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

