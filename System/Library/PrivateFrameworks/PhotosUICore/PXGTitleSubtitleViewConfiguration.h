//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSString, PXTitleSubtitleLabelSpec;

@interface PXGTitleSubtitleViewConfiguration : NSObject <NSCopying>
{
    NSString *_title;	// 8 = 0x8
    NSString *_subtitle;	// 16 = 0x10
    PXTitleSubtitleLabelSpec *_spec;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006d238
@property(copy, nonatomic) PXTitleSubtitleLabelSpec *spec; // @synthesize spec=_spec;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (unsigned long long)hash;	// IMP=0x000000000006d127
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006cf5a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006ce8f

@end

