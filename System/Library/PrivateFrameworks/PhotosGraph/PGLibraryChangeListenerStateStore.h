//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL, PHPersistentChangeToken;

@interface PGLibraryChangeListenerStateStore : NSObject
{
    NSURL *_changeTokenURL;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000199824
@property(readonly, nonatomic) PHPersistentChangeToken *changeToken; // @dynamic changeToken;
- (void)setChangeToken:(id)arg1;	// IMP=0x0000000000199507
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x0000000000199457

@end
