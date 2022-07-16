//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RETransformerInvocation : NSObject
{
    struct vector<unsigned long, std::allocator<unsigned long>> _values;	// 8 = 0x8
}

+ (id)invocationWithArguments:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000a6840
- (id).cxx_construct;	// IMP=0x00000000000a6a6e
- (void).cxx_destruct;	// IMP=0x00000000000a6a52
@property(readonly, nonatomic) unsigned long long numberOfArguments;
- (void)setArgument:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000a69e9
- (unsigned long long)getArgumentAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a69db
- (void)dealloc;	// IMP=0x00000000000a694a
- (id)init;	// IMP=0x00000000000a68b6

@end
