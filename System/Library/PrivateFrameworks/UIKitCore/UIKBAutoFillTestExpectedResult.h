//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCoding-Protocol.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIKBAutoFillTestExpectedResult : NSObject <NSCoding>
{
    NSMutableDictionary *_textFieldTagToTextFieldType;	// 8 = 0x8
    long long _formType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000007a7010
@property(nonatomic) long long formType; // @synthesize formType=_formType;
- (void)setType:(long long)arg1 forTextFieldWithTag:(long long)arg2;	// IMP=0x00000000007a6f6c
- (long long)typeForTextFieldWithTag:(long long)arg1;	// IMP=0x00000000007a6ef0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000007a6e7e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000007a6dc1
- (id)init;	// IMP=0x00000000007a6d49

@end
