//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLayoutManager, NSTextAttachment, NSTextLayoutManager, UIView;
@protocol NSTextLocation;

@interface NSTextAttachmentViewProvider : NSObject
{
    UIView *_view;	// 8 = 0x8
    _Bool _tracksTextAttachmentViewBounds;	// 16 = 0x10
    NSTextAttachment *_textAttachment;	// 24 = 0x18
    NSTextLayoutManager *_textLayoutManager;	// 32 = 0x20
    id <NSTextLocation> _location;	// 40 = 0x28
    unsigned long long _characterIndex;	// 48 = 0x30
    NSLayoutManager *_layoutManager;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000c6920
@property __weak NSLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(readonly) unsigned long long characterIndex; // @synthesize characterIndex=_characterIndex;
@property(retain) id <NSTextLocation> location; // @synthesize location=_location;
@property _Bool tracksTextAttachmentViewBounds; // @synthesize tracksTextAttachmentViewBounds=_tracksTextAttachmentViewBounds;
@property __weak NSTextLayoutManager *textLayoutManager; // @synthesize textLayoutManager=_textLayoutManager;
@property __weak NSTextAttachment *textAttachment; // @synthesize textAttachment=_textAttachment;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;	// IMP=0x00000000000c6828
- (id)initWithTextAttachment:(id)arg1 parentView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;	// IMP=0x00000000000c6787
- (struct CGRect)attachmentBoundsForAttributes:(id)arg1 location:(id)arg2 textContainer:(id)arg3 proposedLineFragment:(struct CGRect)arg4 position:(struct CGPoint)arg5;	// IMP=0x00000000000c672d
- (void)dealloc;	// IMP=0x00000000000c6664
- (void)removeView;	// IMP=0x00000000000c65f4
- (void)loadView;	// IMP=0x00000000000c65ee
@property(retain) UIView *view; // @dynamic view;
- (id)initWithTextAttachment:(id)arg1 parentView:(id)arg2 textLayoutManager:(id)arg3 location:(id)arg4;	// IMP=0x00000000000c64a2

@end

