//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface DNDSClientDetails : NSObject <NSCopying>
{
    _Bool _resolutionContextAssumingDeviceUILocked;	// 8 = 0x8
    _Bool _userInteractionClient;	// 9 = 0x9
    _Bool _persistentAssertionClient;	// 10 = 0xa
    _Bool _syncSuppressedClient;	// 11 = 0xb
    _Bool _iOS14SyncSuppressedClient;	// 12 = 0xc
    NSString *_clientIdentifier;	// 16 = 0x10
    NSArray *_identifiers;	// 24 = 0x18
}

+ (id)_detailsForClientIdentifier:(id)arg1 bundleInfoDictionary:(id)arg2;	// IMP=0x0000000000072436
+ (id)detailsForClientIdentifier:(id)arg1 applicationBundleURL:(id)arg2;	// IMP=0x0000000000072369
+ (id)detailsForBundleAtURL:(id)arg1;	// IMP=0x0000000000072315
- (void).cxx_destruct;	// IMP=0x0000000000072910
@property(readonly, nonatomic, getter=isIOS14SyncSuppressedClient) _Bool iOS14SyncSuppressedClient; // @synthesize iOS14SyncSuppressedClient=_iOS14SyncSuppressedClient;
@property(readonly, nonatomic, getter=isSyncSuppressedClient) _Bool syncSuppressedClient; // @synthesize syncSuppressedClient=_syncSuppressedClient;
@property(readonly, nonatomic, getter=isPersistentAssertionClient) _Bool persistentAssertionClient; // @synthesize persistentAssertionClient=_persistentAssertionClient;
@property(readonly, nonatomic, getter=isUserInteractionClient) _Bool userInteractionClient; // @synthesize userInteractionClient=_userInteractionClient;
@property(readonly, nonatomic, getter=isResolutionContextAssumingDeviceUILocked) _Bool resolutionContextAssumingDeviceUILocked; // @synthesize resolutionContextAssumingDeviceUILocked=_resolutionContextAssumingDeviceUILocked;
@property(readonly, copy, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
@property(readonly, copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000728c4
- (id)initWithClientIdentifier:(id)arg1 identifiers:(id)arg2 resolutionContextAssumingDeviceUILocked:(_Bool)arg3 userInteractionClient:(_Bool)arg4 persistentAssertionClient:(_Bool)arg5 syncSuppressedClient:(_Bool)arg6 iOS14SyncSuppressedClient:(_Bool)arg7;	// IMP=0x00000000000727e9

@end

