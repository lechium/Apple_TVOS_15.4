//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol AMSBagDataSourceProtocol;

__attribute__((visibility("hidden")))
@interface AMSFrozenBagValue
{
    id <AMSBagDataSourceProtocol> _dataSource;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000014cfb3
@property(retain, nonatomic) id <AMSBagDataSourceProtocol> dataSource; // @synthesize dataSource=_dataSource;
- (id)initWithKey:(id)arg1 value:(id)arg2 valueType:(unsigned long long)arg3;	// IMP=0x000000000014c849

@end

