//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface MFDAMailbox
{
    NSString *_folderID;	// 8 = 0x8
}

- (id)description;	// IMP=0x000000000007bb03
- (id)URLStringWithAccount:(id)arg1;	// IMP=0x000000000007ba2e
- (id)_folderID;	// IMP=0x000000000007b9f5
@property(copy) NSString *folderID;
- (_Bool)mergeWithUserInfo:(id)arg1;	// IMP=0x000000000007b861
- (void)dealloc;	// IMP=0x000000000007b81f
- (id)initWithName:(id)arg1 attributes:(unsigned int)arg2 account:(id)arg3 folderID:(id)arg4;	// IMP=0x000000000007b7be

@end

