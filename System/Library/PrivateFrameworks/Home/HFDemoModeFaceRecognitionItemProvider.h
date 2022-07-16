//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFDemoModeFaceRecognitionDataSource, HMHome, NSMutableSet;

@interface HFDemoModeFaceRecognitionItemProvider
{
    long long _mode;	// 8 = 0x8
    HFDemoModeFaceRecognitionDataSource *_dataSource;	// 16 = 0x10
    NSMutableSet *_personItems;	// 24 = 0x18
    HMHome *_home;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000023408e
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) NSMutableSet *personItems; // @synthesize personItems=_personItems;
@property(retain, nonatomic) HFDemoModeFaceRecognitionDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (id)reloadItems;	// IMP=0x0000000000233bf7
- (id)items;	// IMP=0x0000000000233be5
- (id)init;	// IMP=0x0000000000233b30
- (id)initForMode:(long long)arg1 home:(id)arg2;	// IMP=0x0000000000233a5d

@end
