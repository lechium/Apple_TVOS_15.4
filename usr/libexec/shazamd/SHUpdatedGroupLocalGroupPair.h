//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SHGroupMO, SHMediaLibraryGroup;

__attribute__((visibility("hidden")))
@interface SHUpdatedGroupLocalGroupPair : NSObject
{
    SHMediaLibraryGroup *_updatedGroup;	// 8 = 0x8
    SHGroupMO *_localGroup;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000035de1
@property(readonly, nonatomic) SHGroupMO *localGroup; // @synthesize localGroup=_localGroup;
@property(readonly, nonatomic) SHMediaLibraryGroup *updatedGroup; // @synthesize updatedGroup=_updatedGroup;
- (id)initWithUpdatedGroup:(id)arg1 localGroup:(id)arg2;	// IMP=0x0010000000035d34

@end

