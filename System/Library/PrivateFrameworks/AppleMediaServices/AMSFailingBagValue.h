//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError;

__attribute__((visibility("hidden")))
@interface AMSFailingBagValue
{
    NSError *_error;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000011f381
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void)valueWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000011f2ec
- (id)initWithKey:(id)arg1 valueType:(unsigned long long)arg2 error:(id)arg3;	// IMP=0x000000000011f268

@end
