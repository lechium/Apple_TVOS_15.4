//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VectorKit/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface VKLabelExternalIconElement : NSObject <NSSecureCoding>
{
    struct LabelExternalIconElement _element;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000046e94b
- (id).cxx_construct;	// IMP=0x000000000046eae9
- (const void *)element;	// IMP=0x000000000046eadf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000046ea32
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000046e953
- (id)initWithIconElement:(const void *)arg1;	// IMP=0x000000000046e8e3

@end

