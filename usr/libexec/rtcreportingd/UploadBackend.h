//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface UploadBackend
{
    NSString *_uploadURL;	// 256 = 0x100
}

@property(copy) NSString *uploadURL; // @synthesize uploadURL=_uploadURL;
- (_Bool)uploadFileAtPath:(id)arg1 extensionToken:(char *)arg2;	// IMP=0x0010000000016720
- (void)dealloc;	// IMP=0x00100000000166de
- (id)initWithName:(id)arg1 profile:(id)arg2 productFamily:(id)arg3;	// IMP=0x00100000000165e7

@end

