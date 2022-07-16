//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOperation;

__attribute__((visibility("hidden")))
@interface TVHKMediaEntityStoreImageLoadOperation
{
    NSOperation *_currentSubOperation;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003d5d0
@property(retain, nonatomic) NSOperation *currentSubOperation; // @synthesize currentSubOperation=_currentSubOperation;
- (id)_templateImageURLStringFromLookupResults:(id)arg1 storeID:(id)arg2;	// IMP=0x000000000003d4d9
- (void)_startImageLoadOperationWithTemplateImageURLString:(id)arg1;	// IMP=0x000000000003d229
- (void)_startLookupOperation;	// IMP=0x000000000003ce77
- (id)_mediaEntityImageLoadParams;	// IMP=0x000000000003ce65
- (void)cancel;	// IMP=0x000000000003cde7
- (void)executionDidBegin;	// IMP=0x000000000003cdd5
- (id)initWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3;	// IMP=0x000000000003cccf

@end

