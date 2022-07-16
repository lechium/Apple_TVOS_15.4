//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVKit/NSCopying-Protocol.h>

@class NSArray, NSString, NSURL, UIImage;

@interface AVContentProposal : NSObject <NSCopying>
{
    double _automaticAcceptanceInterval;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    UIImage *_previewImage;	// 24 = 0x18
    NSURL *_URL;	// 32 = 0x20
    NSArray *_metadata;	// 40 = 0x28
    CDStruct_1b6d18a9 _contentTimeForTransition;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000002982
@property(copy, nonatomic) NSArray *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double automaticAcceptanceInterval; // @synthesize automaticAcceptanceInterval=_automaticAcceptanceInterval;
@property(readonly, nonatomic) CDStruct_1b6d18a9 contentTimeForTransition; // @synthesize contentTimeForTransition=_contentTimeForTransition;
- (unsigned long long)hash;	// IMP=0x0000000000002792
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000002735
- (_Bool)isEqualToContentProposal:(id)arg1;	// IMP=0x00000000000023ab
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000226b
- (id)initWithContentTimeForTransition:(CDStruct_1b6d18a9)arg1 title:(id)arg2 previewImage:(id)arg3;	// IMP=0x000000000000218c

@end

