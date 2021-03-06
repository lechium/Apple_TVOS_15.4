//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileManager;

@interface DMCFileAccessRepairTool : NSObject
{
    NSFileManager *_fileManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000013edc
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (_Bool)writeData:(id)arg1 toFileAtPath:(id)arg2;	// IMP=0x0000000000013eae
- (id)contentsOfFileAtPath:(id)arg1;	// IMP=0x0000000000013e95
- (_Bool)changePermissions:(unsigned short)arg1 ofFileAtPath:(id)arg2;	// IMP=0x0000000000013e5f
- (int)accessAtPath:(const char *)arg1 mode:(int)arg2 error:(int *)arg3;	// IMP=0x0000000000013e19
- (id)createFileManager;	// IMP=0x0000000000013e00
- (id)createRepairToolErrorWithCode:(long long)arg1;	// IMP=0x0000000000013dda
- (_Bool)repairFileAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000013cd0
- (_Bool)posixThinksFileNeedsRepairAtPath:(id)arg1;	// IMP=0x0000000000013c6b
- (_Bool)fileManagerThinksFileNeedsRepairAtPath:(id)arg1;	// IMP=0x0000000000013bb7
- (_Bool)fileNeedsRepairAtPath:(id)arg1;	// IMP=0x0000000000013a25

@end

