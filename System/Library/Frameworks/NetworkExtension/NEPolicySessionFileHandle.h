//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface NEPolicySessionFileHandle
{
    NSString *_name;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000004d0da
@property(readonly) NSString *name; // @synthesize name=_name;
- (unsigned long long)type;	// IMP=0x000000000004d0b9
- (id)description;	// IMP=0x000000000004d019
- (id)dictionary;	// IMP=0x000000000004cf9e
- (id)initFromDictionary:(id)arg1;	// IMP=0x000000000004cef2
- (id)initWithPolicySession:(id)arg1 name:(id)arg2;	// IMP=0x000000000004ce47
- (id)initWithPolicySession:(id)arg1;	// IMP=0x000000000004ce2e

@end

