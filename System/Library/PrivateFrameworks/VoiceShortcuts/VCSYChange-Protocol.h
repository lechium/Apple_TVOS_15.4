//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VoiceShortcuts/VCPBCodable-Protocol.h>
#import <VoiceShortcuts/VCPBMessageTyped-Protocol.h>

@class NSString;

@protocol VCSYChange <VCPBCodable, VCPBMessageTyped>
@property(readonly, nonatomic) long long changeType;
@property(readonly, nonatomic) NSString *objectIdentifier;
- (id)initWithObjectIdentifier:(NSString *)arg1 changeType:(long long)arg2;
@end

