//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MFRangedDataFilter
{
    struct _NSRange _range;	// 24 = 0x18
    unsigned long long _consumedLength;	// 40 = 0x28
}

+ (id)rangedFilterWithConsumer:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000000362aa
+ (id)rangedFilterWithConsumers:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000036261
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (long long)appendData:(id)arg1;	// IMP=0x00000000000362f3

@end
