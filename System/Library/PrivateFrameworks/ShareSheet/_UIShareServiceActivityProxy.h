//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, NSUUID, UISUIActivityExtensionItemDataRequest;

@interface _UIShareServiceActivityProxy : NSObject
{
    NSUUID *_activityUUID;	// 8 = 0x8
    NSString *_activityType;	// 16 = 0x10
    long long _activityCategory;	// 24 = 0x18
    UISUIActivityExtensionItemDataRequest *_underlyingActivityItemDataRequest;	// 32 = 0x20
    Class _remoteClass;	// 40 = 0x28
    struct CGSize _thumbnailSize;	// 48 = 0x30
    NSURL *_representationCacheURL;	// 64 = 0x40
    CDUnknownBlockType _didFinishPreparingForExecution;	// 72 = 0x48
    CDUnknownBlockType _didFinishPerformingActivityHandler;	// 80 = 0x50
}

+ (void)forwardInvocation:(id)arg1;	// IMP=0x000000000004b5be
+ (id)activityProxyForServiceActivityDataRequest:(id)arg1;	// IMP=0x000000000004b3c4
- (void).cxx_destruct;	// IMP=0x000000000004bab1
@property(copy, nonatomic) CDUnknownBlockType didFinishPerformingActivityHandler; // @synthesize didFinishPerformingActivityHandler=_didFinishPerformingActivityHandler;
@property(copy, nonatomic) CDUnknownBlockType didFinishPreparingForExecution; // @synthesize didFinishPreparingForExecution=_didFinishPreparingForExecution;
- (void)_loadItemProvidersFromActivityItems:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000004b96a
- (void)_willBePerformedOrPresented;	// IMP=0x000000000004b964
- (struct CGSize)_thumbnailSize;	// IMP=0x000000000004b954
- (_Bool)_activitySupportsPromiseURLs;	// IMP=0x000000000004b93e
- (_Bool)_needsResolvedActivityItems;	// IMP=0x000000000004b936
- (_Bool)_managesOwnPresentation;	// IMP=0x000000000004b92e
- (_Bool)_dismissActivityFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000004b926
- (_Bool)_presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000004b912
- (id)_embeddedActivityViewController;	// IMP=0x000000000004b90a
- (void)_cleanup;	// IMP=0x000000000004b904
- (void)activityDidFinish:(_Bool)arg1 items:(id)arg2 error:(id)arg3;	// IMP=0x000000000004b830
- (void)activityDidFinish:(_Bool)arg1;	// IMP=0x000000000004b819
- (void)_prepareWithActivityItems:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000004b7cf
- (void)prepareWithActivityItems:(id)arg1;	// IMP=0x000000000004b7c9
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x000000000004b7c1
- (id)activityViewController;	// IMP=0x000000000004b7b9
- (id)activityImage;	// IMP=0x000000000004b7b1
- (id)activityTitle;	// IMP=0x000000000004b7a9
- (_Bool)allowsEmbedding;	// IMP=0x000000000004b7a1
- (_Bool)_wantsInitialSocialText;	// IMP=0x000000000004b799
- (_Bool)_wantsAttachmentURLItemData;	// IMP=0x000000000004b783
- (_Bool)_wantsThumbnailItemData;	// IMP=0x000000000004b76d
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000004b743
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000004b662
- (id)activityType;	// IMP=0x000000000004b5b0
- (id)activityUUID;	// IMP=0x000000000004b5a2
- (_Bool)_isExecutedInProcess;	// IMP=0x000000000004b59a
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x000000000004b546
- (id)initWithUnderlyingActivityItemDataRequest:(id)arg1;	// IMP=0x000000000004b43d

@end

