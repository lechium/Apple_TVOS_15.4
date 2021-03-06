//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface CPLChangeSessionUpdate : NSObject <NSSecureCoding>
{
    NSString *_libraryVersion;	// 8 = 0x8
    NSDate *_queuedDate;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000048763
- (void).cxx_destruct;	// IMP=0x000000000004873b
@property(readonly, nonatomic) NSDate *queuedDate; // @synthesize queuedDate=_queuedDate;
@property(readonly, copy, nonatomic) NSString *libraryVersion; // @synthesize libraryVersion=_libraryVersion;
- (id)pendingRecordChangeForClientCacheWithLocalScopedIdentifier:(id)arg1;	// IMP=0x000000000004871f
@property(readonly, nonatomic) NSString *statusDescription;
- (id)storageForStatusInStore:(id)arg1;	// IMP=0x0000000000048705
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000048697
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000048597
- (_Bool)discardFromStore:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004858f
- (_Bool)applyToStore:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000048573
- (id)initWithStore:(id)arg1;	// IMP=0x00000000000484c4

@end

