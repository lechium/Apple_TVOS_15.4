//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/NSCopying-Protocol.h>

@class NSString;

@interface MFSQLiteConnectionConfiguration : NSObject <NSCopying>
{
    NSString *_basePath;	// 8 = 0x8
    NSString *_databaseName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000ab286
@property(copy, nonatomic) NSString *databaseName; // @synthesize databaseName=_databaseName;
@property(copy, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ab1b7
- (id)_databasePathWithDatabaseName:(id)arg1;	// IMP=0x00000000000aafbf
@property(readonly, nonatomic) const char *databaseFileSystemPath;
@property(readonly, nonatomic) NSString *databasePath;

@end

