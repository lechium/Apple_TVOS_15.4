//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebCore/AVAssetResourceLoaderDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebCoreAVFLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate>
{
    struct WeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC, WTF::EmptyCounter> m_player;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x00000000000fe9e0
- (void).cxx_destruct;	// IMP=0x00000000000fe9b0
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;	// IMP=0x00000000000fe8e0
- (_Bool)resourceLoader:(id)arg1 shouldWaitForResponseToAuthenticationChallenge:(id)arg2;	// IMP=0x00000000000fe8d0
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;	// IMP=0x00000000000fe800
- (id)initWithPlayer:(void *)arg1;	// IMP=0x00000000000fe790

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
