//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSString;

@interface SiriTVUICollectionViewCellTemplateItem
{
    _Bool _sizeToFitImage;	// 8 = 0x8
    NSString *_monogramText;	// 16 = 0x10
    NSArray *_monogramNames;	// 24 = 0x18
    NSDictionary *_images;	// 32 = 0x20
    NSString *_titleText;	// 40 = 0x28
    NSString *_subtitleText;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001c7b2
@property(nonatomic) _Bool sizeToFitImage; // @synthesize sizeToFitImage=_sizeToFitImage;
@property(copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(copy, nonatomic) NSDictionary *images; // @synthesize images=_images;
@property(copy, nonatomic) NSArray *monogramNames; // @synthesize monogramNames=_monogramNames;
@property(copy, nonatomic) NSString *monogramText; // @synthesize monogramText=_monogramText;
- (id)initWithImages:(id)arg1 sizeToFitImage:(_Bool)arg2 titleText:(id)arg3 subtitleText:(id)arg4 monogramText:(id)arg5;	// IMP=0x000000000001c5ae
- (id)initWithImages:(id)arg1 sizeToFitImage:(_Bool)arg2 titleText:(id)arg3 subtitleText:(id)arg4 monogramNames:(id)arg5;	// IMP=0x000000000001c474
- (id)initWithImages:(id)arg1 sizeToFitImage:(_Bool)arg2 titleText:(id)arg3 monogramNames:(id)arg4;	// IMP=0x000000000001c452
- (id)init;	// IMP=0x000000000001c436

@end

