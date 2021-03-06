//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVHomeSharingKit/TVHKContributorImageLoadOperationDelegate-Protocol.h>

@class NSMutableDictionary, NSOperationQueue, NSString;

@interface TVHKContributorImageLoader <TVHKContributorImageLoadOperationDelegate>
{
    NSMutableDictionary *_templateImageURLStringByContributorName;	// 8 = 0x8
    NSMutableDictionary *_creditsContextByIdentifier;	// 16 = 0x10
    NSMutableDictionary *_processedMediaItemIdentifiers;	// 24 = 0x18
    NSOperationQueue *_creditsOperationQueue;	// 32 = 0x20
}

+ (id)_mediaItemIdentifierForContributorImageLoadParams:(id)arg1;	// IMP=0x0000000000069dec
+ (id)sharedInstance;	// IMP=0x0000000000068be0
- (void).cxx_destruct;	// IMP=0x0000000000069ed8
@property(readonly, nonatomic) NSOperationQueue *creditsOperationQueue; // @synthesize creditsOperationQueue=_creditsOperationQueue;
@property(readonly, nonatomic) NSMutableDictionary *processedMediaItemIdentifiers; // @synthesize processedMediaItemIdentifiers=_processedMediaItemIdentifiers;
@property(readonly, nonatomic) NSMutableDictionary *creditsContextByIdentifier; // @synthesize creditsContextByIdentifier=_creditsContextByIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *templateImageURLStringByContributorName; // @synthesize templateImageURLStringByContributorName=_templateImageURLStringByContributorName;
- (void)_updateTemplateImageURLStrings:(id)arg1;	// IMP=0x0000000000069d13
- (void)_completeTemplateImageURLStringRequest:(id)arg1 templateImageURLStrings:(id)arg2 error:(id)arg3;	// IMP=0x0000000000069ac8
- (void)operation:(id)arg1 templateImageURLStringForParams:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000068ef2
- (id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3;	// IMP=0x0000000000068e18
- (id)_imageLoadParamsForImageLoaderObject:(id)arg1;	// IMP=0x0000000000068d9b
- (void)_cancelAllImageLoads;	// IMP=0x0000000000068d31
- (id)_imageLoaderIdentifier;	// IMP=0x0000000000068d24
- (id)init;	// IMP=0x0000000000068c65

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

