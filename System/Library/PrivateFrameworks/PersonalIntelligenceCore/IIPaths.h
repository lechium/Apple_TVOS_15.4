//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IIPaths : NSObject
{
}

+ (id)resourcesDirectory;	// IMP=0x00000000000118cb
+ (id)suggestionsSubdirectory:(id)arg1;	// IMP=0x00000000000118b4
+ (id)suggestionsSubdirectory:(id)arg1 creatingDirectoriesIfNeeded:(_Bool)arg2;	// IMP=0x00000000000118a2
+ (id)subdirectory:(id)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x00000000000114a6
+ (id)suggestionsDirectoryFile:(id)arg1 creatingSuggestionsDirectoryIfNeeded:(_Bool)arg2;	// IMP=0x0000000000011494
+ (id)suggestionsDirectoryFile:(id)arg1;	// IMP=0x000000000001147d
+ (id)filename:(id)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x00000000000113e7
+ (id)suggestionsDirectoryAfterCreatingIfNeeded:(_Bool)arg1;	// IMP=0x00000000000113d5
+ (id)suggestionsDirectory;	// IMP=0x00000000000113c3
+ (id)topDirectoryWithName:(id)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x0000000000010f5d
+ (id)topDirectoryCreateIfNeeded:(_Bool)arg1;	// IMP=0x0000000000010ef7
+ (id)topDirectory;	// IMP=0x0000000000010ee0

@end

