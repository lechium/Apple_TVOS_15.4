//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface SISchemaInstrumentationMessage : PBCodable
{
}

- (void)willProduceDictionaryRepresentation:(id)arg1;	// IMP=0x0000000000004c80
- (id)qualifiedMessageName;	// IMP=0x0000000000004c73
- (id)formattedJsonBody;	// IMP=0x0000000000004954
- (id)_pruneSuppressedMessagesFromArray:(id)arg1 underConditions:(id)arg2;	// IMP=0x000000000030bed3
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000030be5d
- (id)suppressMessageUnderConditions;	// IMP=0x000000000030be3f
- (_Bool)shouldSuppressMessageUnderConditions:(id)arg1;	// IMP=0x000000000030bdbc
- (void)unwrapMessageWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000033e9d5

@end

