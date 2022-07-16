//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/NSTextAttachment.h>

@class IKBadgeElement, IKColor;

@interface IKTextBadgeAttachment : NSTextAttachment
{
    IKBadgeElement *_badge;	// 8 = 0x8
    IKColor *_tintColor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000740ac
@property(retain, nonatomic) IKColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic) __weak IKBadgeElement *badge; // @synthesize badge=_badge;
- (id)initWithBadgeElement:(id)arg1;	// IMP=0x0000000000074007

@end

