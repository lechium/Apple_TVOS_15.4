//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface _SUICAtomRanged : NSObject
{
    NSString *_replacementText;	// 8 = 0x8
    struct _NSRange _editRange;	// 16 = 0x10
}

+ (id)atomWithEditRange:(struct _NSRange)arg1 replacementText:(id)arg2;	// IMP=0x000000000001496f
- (void).cxx_destruct;	// IMP=0x0000000000014a07
@property(retain, nonatomic) NSString *replacementText; // @synthesize replacementText=_replacementText;
@property(nonatomic) struct _NSRange editRange; // @synthesize editRange=_editRange;
- (_Bool)isEqualToEditScriptAtomRanged:(id)arg1;	// IMP=0x000000000001481e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000147b6
- (id)description;	// IMP=0x0000000000014701
- (id)initWithEditRange:(struct _NSRange)arg1 replacementText:(id)arg2;	// IMP=0x0000000000014670

@end

