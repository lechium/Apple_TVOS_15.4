//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

@interface PFFolder
{
    _Bool _isLeaf;	// 48 = 0x30
    NSMutableArray *_files;	// 56 = 0x38
    NSMutableArray *_folders;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000010fd4
@property(nonatomic) _Bool isLeaf; // @synthesize isLeaf=_isLeaf;
@property(retain, nonatomic) NSMutableArray *folders; // @synthesize folders=_folders;
@property(retain, nonatomic) NSMutableArray *files; // @synthesize files=_files;
- (void)addFolder:(id)arg1;	// IMP=0x0000000000010f03
- (void)addFolders:(id)arg1;	// IMP=0x0000000000010e72
- (void)addFile:(id)arg1;	// IMP=0x0000000000010da0
- (void)addFiles:(id)arg1;	// IMP=0x0000000000010d31
- (id)init;	// IMP=0x0000000000010cf2

@end

