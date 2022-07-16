//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIFoundation/NSTextAttachment.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _UITextPlaceholderAttachment : NSTextAttachment
{
    NSDictionary *_typingAttributesBeforeInsertion;	// 8 = 0x8
    struct _NSRange _attachmentRange;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000e8fea0
@property(copy, nonatomic) NSDictionary *typingAttributesBeforeInsertion; // @synthesize typingAttributesBeforeInsertion=_typingAttributesBeforeInsertion;
@property(nonatomic) struct _NSRange attachmentRange; // @synthesize attachmentRange=_attachmentRange;
- (id)imageForBounds:(struct CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;	// IMP=0x0000000000e8fe4a

@end

