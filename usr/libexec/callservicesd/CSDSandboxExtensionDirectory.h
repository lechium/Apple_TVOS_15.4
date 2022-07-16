//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileManager, NSString, NSURL;

@interface CSDSandboxExtensionDirectory : NSObject
{
    NSURL *_URL;	// 8 = 0x8
    NSFileManager *_fileManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000aef85
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)urlForFilename:(id)arg1;	// IMP=0x00100000000aeead
- (_Bool)removeLinksForFilenamesNotInArray:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000ae86b
- (id)createLinkIfNecessaryWithFilename:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000ae54c
@property(readonly, copy, nonatomic) NSString *name;
- (id)init;	// IMP=0x00100000000ae472
- (id)initWithName:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000ae3ec
- (id)initWithName:(id)arg1 fileManager:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000ae227

@end

