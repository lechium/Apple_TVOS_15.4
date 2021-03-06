//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class UIColor;

@interface MPArtworkImageAttachments : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _hasTitle;	// 8 = 0x8
    UIColor *_textColor;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000077a02
- (void).cxx_destruct;	// IMP=0x00000000000779f2
@property(readonly, nonatomic) _Bool hasTitle; // @synthesize hasTitle=_hasTitle;
@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000779d4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000077937
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000077898
- (id)description;	// IMP=0x00000000000777eb
- (id)initWithTextColor:(id)arg1 hasTitle:(_Bool)arg2;	// IMP=0x0000000000077775

@end

