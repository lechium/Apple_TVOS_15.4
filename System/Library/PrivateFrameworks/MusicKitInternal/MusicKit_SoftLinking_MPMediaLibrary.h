//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPMediaLibrary;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPMediaLibrary : NSObject
{
    MPMediaLibrary *_underlyingMediaLibrary;	// 8 = 0x8
}

+ (id)libraryDidChangeNotificationName;	// IMP=0x0000000000009e36
+ (id)sharedLibrary;	// IMP=0x0000000000009ac7
- (void).cxx_destruct;	// IMP=0x0000000000009ee6
- (void)_handlelibraryDidChangeNotification:(id)arg1;	// IMP=0x0000000000009e43
- (void)endGeneratingLibraryChangeNotifications;	// IMP=0x0000000000009e20
- (void)beginGeneratingLibraryChangeNotifications;	// IMP=0x0000000000009e0a
- (void)dealloc;	// IMP=0x0000000000009d70
- (id)_initWithUnderlyingMediaLibrary:(id)arg1;	// IMP=0x0000000000009bfe

@end
