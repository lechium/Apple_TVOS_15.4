//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableDictionary;

@interface PXFileBackedAssetsDataSourceManager
{
    NSMutableDictionary *_fileURLsBySection;	// 8 = 0x8
}

+ (id)fileBackedDataSourceManagerWithDirectory:(id)arg1;	// IMP=0x00000000004151e9
+ (id)emptyFileBackedDataSourceManager;	// IMP=0x00000000004151b9
- (void).cxx_destruct;	// IMP=0x00000000004151a6
@property(readonly, nonatomic) NSDictionary *fileURLsBySection; // @synthesize fileURLsBySection=_fileURLsBySection;
- (void)insertFileURL:(id)arg1 atIndex:(long long)arg2 inSection:(long long)arg3;	// IMP=0x0000000000414e5a
- (void)removeFileURLsAtIndexes:(id)arg1 inSection:(long long)arg2;	// IMP=0x0000000000414b56
- (void)_createDataSource;	// IMP=0x0000000000414acf
- (id)initWithFileURLsBySection:(id)arg1;	// IMP=0x0000000000414a40

@end

