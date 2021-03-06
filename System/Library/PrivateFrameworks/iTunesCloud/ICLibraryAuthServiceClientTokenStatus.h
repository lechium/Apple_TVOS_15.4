//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class ICLibraryAuthServiceClientTokenResult, NSError;

@interface ICLibraryAuthServiceClientTokenStatus : NSObject <NSSecureCoding>
{
    _Bool _shouldExcludeFromBackgroundRefresh;	// 8 = 0x8
    ICLibraryAuthServiceClientTokenResult *_tokenResult;	// 16 = 0x10
    NSError *_lastError;	// 24 = 0x18
    double _lastUpdateAttemptTime;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000832e7
- (void).cxx_destruct;	// IMP=0x00000000000832bf
@property(nonatomic) _Bool shouldExcludeFromBackgroundRefresh; // @synthesize shouldExcludeFromBackgroundRefresh=_shouldExcludeFromBackgroundRefresh;
@property(nonatomic) double lastUpdateAttemptTime; // @synthesize lastUpdateAttemptTime=_lastUpdateAttemptTime;
@property(copy, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
@property(copy, nonatomic) ICLibraryAuthServiceClientTokenResult *tokenResult; // @synthesize tokenResult=_tokenResult;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000831c5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000830b7

@end

