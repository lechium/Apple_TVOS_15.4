//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSBagURLParser : NSObject
{
}

+ (struct _NSRange)_rangeOfTemplateInURLString:(id)arg1;	// IMP=0x00000000000b0b95
+ (struct _NSRange)_rangeofSubstringWithOpeningTag:(id)arg1 closingTag:(id)arg2 inString:(id)arg3;	// IMP=0x00000000000b0ab6
+ (id)_firstVariableInTemplate:(id)arg1 includeTags:(_Bool)arg2;	// IMP=0x00000000000b09f4
+ (id)URLBySubstitutingVariablesInURLString:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b0708

@end

